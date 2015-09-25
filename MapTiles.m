//
//  MapTiles.m
//  ProceduralLevelGeneration
//
//  Created by Peter Scheyer on 9/25/15.
//  Copyright © 2015 Kim Pedersen. All rights reserved.
//

#import "MapTiles.h"

@interface MapTiles ()
@property (nonatomic) NSInteger *tiles;
@end

@implementation MapTiles

-(void) dealloc {
    if (self.tiles) {
        free(self.tiles);
        self.tiles = nil;
    }
}

- (instancetype) initWithGridSize:(CGSize)size {
    if ((self = [super init] )){
        _gridSize = size;
        _count = (NSUInteger) size.width * size.height;
        self.tiles = calloc(self.count, sizeof(NSInteger));
        NSAssert(self.tiles, @"Could not allocate memory for tiles");
    }
    return self;
}

@end
