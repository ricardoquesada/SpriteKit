/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIResponder.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKScene;

@interface SKNode : UIResponder <NSCopying, NSCoding>
{
    _Bool _spritesNeedsRemove;
    NSMutableArray *_actionsToRemove;
    NSMutableArray *_spritesToRemove;
    void *csprite;
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    _Bool _needsDelete;
    NSMutableArray *_deleteList;
    NSString *_name;
    NSMutableDictionary *_userData;
}

+ (id)node;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)hasUniformAlphaAndIsVisible;
- (_Bool)intersectsNode:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (id)nodesAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
@property(getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setScale:(double)arg1;
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;
@property(nonatomic) struct CGPoint position;
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
- (id)description;
- (_Bool)needsUpdate;
- (_Bool)hasActions;
- (id)containingView;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)runAction:(id)arg1 withKey:(id)arg2;
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(id)arg2;
- (void)runAction:(id)arg1;
@property(readonly, nonatomic) NSArray *children;
- (_Bool)hasChildren;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2 stopPointer:(void)arg3;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(id)arg2;
- (id)childNodeWithName:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
- (void)_performCleanup;
- (void)removeAllChildren;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
- (_Bool)inParentHierarchy:(id)arg1;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)removeFromParent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

