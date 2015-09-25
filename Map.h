//
//  Map.h
//  ProceduralLevelGeneration
//
//  Created by Peter Scheyer on 9/25/15.
//  Copyright © 2015 Kim Pedersen. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface Map : SKNode

@property (nonatomic) CGSize gridSize;
@property (nonatomic, readonly) CGPoint spawnPoint;
@property (nonatomic, readonly) CGPoint exitPoint;

+ (instancetype) mapWithGridSize:(CGSize)gridSize;
- (instancetype) initWithGridSize:(CGSize)gridSize;

@property(nonatomic) NSUInteger maxFloorCount;

@end
