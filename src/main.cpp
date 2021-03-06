#include <vector>
#include <iostream>
#include "SDL.h"
#include "init_close.hpp"
#include "globals.hpp"
#include "images.hpp"
#include "enemy.hpp"
#include "player.hpp"
#include "ltimer.hpp"
#include "bullet.hpp"
#include "game.hpp"

int main()
{
    // init();
    // Player player;
    // SDL_Event e;
    // bool quit = false;
    // std::vector<Enemy*> Enemies;
    // LTimer fpsTimer;
    // LTimer capTimer;
    // LTimer enemyTimer;
    // LTimer bulletTimer;
    // float avgFPS;
    // int countedFrames = 0;
    // fpsTimer.start(); 

    // for( int i = 0; i < SCREEN_WIDTH - 16; i+= 16 )
    // {
    // 	for( int j = 0; j < SCREEN_HEIGHT / 16; j += 16 )
    // 	{
    // 	    Enemies.push_back( new Enemy( i, j ) );
    // 	}
    // }

 
    // enemyTimer.start();
    // bulletTimer.start();
    
    // while( !quit )
    // {
    // 	capTimer.start();
	
    // 	while( SDL_PollEvent( &e ) != 0 )
    // 	{
    // 	    if( e.type == SDL_QUIT || (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_ESCAPE ) )
    // 		quit = true;
    // 	    if( e.type == SDL_KEYDOWN )
    // 		player.HandleInput( &e );
    // 	}

    // 	avgFPS = countedFrames / ( fpsTimer.getTicks() / 1000.f );
    // 	if( avgFPS > 2000000 )
    // 	    avgFPS = 0;

    // 	SDL_RenderClear( gRenderer );
    // 	player.Render();
    // 	for( int i = 0; i < Enemies.size(); i++ )
    // 	{
    // 	    Enemies[i]->Render();
    // 	    if( enemyTimer.getTicks() >= 250 )
    // 	    {
    // 		for( int j = 0; j < Enemies.size(); j++ )
    // 		    Enemies[j]->Move();
    // 		enemyTimer.reset();
    // 	    }
    // 	}
    // 	for( int i = 0; i < gAllBullets.size(); i++ )
    // 	{
    // 	    gAllBullets[i]->Render();
    // 	    if( bulletTimer.getTicks() >= 10 )
    // 	    {
    // 		for( int j = 0; j < gAllBullets.size(); j++ )
    // 		    gAllBullets[j]->Move();
    // 		bulletTimer.reset();
    // 	    }
    // 	}
    // 	for( int i = 0; i < Enemies.size(); i++ )
    // 	{
    // 	    for( int j = 0; j < gAllBullets.size(); j++ )
    // 	    {
    // 		if( Enemies[i]->getX() == gAllBullets[j]->getX() &&
    // 		    Enemies[i]->getY() == gAllBullets[j]->getY() )
    // 		{
    // 		    delete Enemies[i];
    // 		    delete gAllBullets[j];
    // 		    Enemies.erase( Enemies.begin() + i );
    // 		    gAllBullets.erase( gAllBullets.begin() + j );
    // 		}
    // 	    }
    // 	    if( Enemies[i]->getY() > SCREEN_HEIGHT - 32 )
    // 		quit = true;
    // 	}

    // 	if( Enemies.empty() )
    // 	    quit = true;

    // 	SDL_RenderPresent( gRenderer );
    // 	++countedFrames;

    // 	int frameTicks = capTimer.getTicks();
    // 	if( frameTicks < SCREEN_TICKS_PER_FRAME )
    // 	    SDL_Delay( SCREEN_TICKS_PER_FRAME - frameTicks );
    // }

    // close();
    Game game;
    game.Start();
    game.UpdateRenderer();
    SDL_Delay( 2000 );
    game.Close();
    return 0;
}
