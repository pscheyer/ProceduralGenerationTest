//
//  MapTiles.h
//  ProceduralLevelGeneration
//
//  Created by Peter Scheyer on 9/25/15.
//  Copyright © 2015 Kim Pedersen. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, MapTileType) {
    MapTileTypeInvalid = -1,
    MapTileTypeNone = 0,
    MapTileTypeFloor = 1,
    MapTileTypeWall = 2,
};

@interface MapTiles : NSObject

@property (nonatomic, readonly) NSUInteger count;
@property (nonatomic, readonly) CGSize gridSize;

-(instancetype) initWithGridSize:(CGSize)size;
-(MapTileType) tileTypeAt:(CGPoint)tileCoordinate;
-(void) setTileType:(MapTileType)type at:(CGPoint)tileCoordinate;
-(BOOL) isEdgeTileAt:(CGPoint)tileCoordinate;
-(BOOL) isValidTileCoordinateAt:(CGPoint)tileCoordinate;


@end
