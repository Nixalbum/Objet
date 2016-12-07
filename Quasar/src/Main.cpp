/**
Copyright 2016 Nixalbum
This file is part of Quasar.

    Quasar is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Quasar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Quasar.  If not, see <http://www.gnu.org/licenses/>.
**/
#include "Humain.hpp"
#include "Robot.hpp"
#include "Quasar.hpp"
#include <SDL.h>
SDL_Rect b1,b2;
void dessinerQuasar(SDL_Surface* screen){
	b1.x = 0;
	b1.y = (int)(2*(screen->h /3));
	b1.w = (int)(screen->w / 2);
	b1.h = (int)(screen->h /3);
	b2.x = (int)(screen->w / 2);;
	b2.y = b1.y;
	b2.w = b1.w;
	b2.h = b1.h;
	SDL_FillRect( screen, &b1, SDL_MapRGB( screen->format, 0x00, 0xFF, 0x00 ) );
	SDL_FillRect( screen, &b2, SDL_MapRGB( screen->format, 0xFF, 0x00, 0x00 ) );
}
bool insideRect(SDL_Rect * rect, int x, int y){
	return (x>rect->x &&  x<(rect->x+rect->w) && y>rect->y &&  y<(rect->y+rect->h));
}
int main(int argc, char* argv[]){
	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		return 1;
	}
	window = SDL_CreateWindow("Quasar", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 300, SDL_WINDOW_SHOWN );
	if(window == NULL){
		return 2;
	}
	screenSurface = SDL_GetWindowSurface(window);
	SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );
	Quasar q;
	Jeu *jeuQ = &q;
	dessinerQuasar(screenSurface);
	SDL_UpdateWindowSurface( window );
	if(argc == 1){
		bool quit = false;
		Humain j (50);
		jeuQ->recommencer(j.getCB());
		SDL_Event e;
		bool modif = true;
		while(!quit){
			while( SDL_PollEvent( &e ) != 0){
				if(e.type == SDL_QUIT){
					quit = true;
				}else if(e.type == SDL_MOUSEBUTTONDOWN){
					//Position souris
					int mx, my;
					SDL_GetMouseState( &mx, &my );
					/*//j.handleEvent(e);//assigne une valeur au choix
					j.joue();//utilise le choix;*/
					if(insideRect(&b1, mx, my)){
						jeuQ->bouton1();
						modif = true;
					}else if(insideRect(&b2, mx, my)){
						jeuQ->bouton2();
						modif = true;
					}
					
				}
			}
			if(modif){
				modif = false;
				jeuQ->voirScore();
			}
		}
	}else if(argv[1]== std::string("bot")){//bot en argument lance une partie de robot pour travis
		Robot r(50, "quasar");
		//r.commencerJeu(jeuQ);
		
		r.joue();
	}
	SDL_DestroyWindow( window );
	SDL_Quit();
	return 0;
}
