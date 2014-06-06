//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface SKPhysicsWorld : NSObject <NSCoding>
{
    double speed;
    id <SKPhysicsContactDelegate> _contactDelegate;
    struct CGVector _gravity;
}

+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) id <SKPhysicsContactDelegate> contactDelegate; // @synthesize contactDelegate=_contactDelegate;
@property(nonatomic) struct CGVector gravity; // @synthesize gravity=_gravity;
@property(nonatomic) double speed; // @synthesize speed;
- (id).cxx_construct;
- (struct CGVector)sampleField:(id)arg1 position:(struct CGPoint)arg2;
- (struct CGVector)sampleFields:(struct CGPoint)arg1;
- (id)bodyAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)bodyInRect:(struct CGRect)arg1;
- (id)bodyAtPoint:(struct CGPoint)arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateBodiesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateBodiesAtPoint:(struct CGPoint)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeAllJoints;
- (void)removeJoint:(id)arg1;
- (void)addJoint:(id)arg1;
- (id)fields;
- (id)bodies;
- (_Bool)hasBodies;
- (void)removeAllBodies;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (_Bool)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

