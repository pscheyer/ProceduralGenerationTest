//
//  Map.m
//  ProceduralLevelGeneration
//
//  Created by Peter Scheyer on 9/25/15.
//  Copyright © 2015 Kim Pedersen. All rights reserved.
//

#import "Map.h"

@implementation Map

+(instancetype) mapWithGridSize:(CGSize)gridSize{
    return [[self alloc] initWithGridSize:gridSize];
}

-(instancetype) initWithGridSize:(CGSize)gridSize{
    if(( self = [super init] )) {
        self.gridSize = gridSize;
        _spawnPoint = CGPointZero;
        _exitPoint = CGPointZero;
    }
    
    return self;
}

@end
