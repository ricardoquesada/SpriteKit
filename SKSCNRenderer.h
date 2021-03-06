//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKLabelNode, SKScene;

@interface SKSCNRenderer : NSObject
{
    double _timePreviousUpdate;
    SKLabelNode *_statsLabel;
    double _prevViewAspect;
    unsigned int _spritesRendered;
    unsigned int _spritesSubmitted;
    int _frames;
    unsigned int _prevSpritesRendered;
    unsigned int _prevSpritesRenderedSubmitted;
    double _timeBeginFrameCount;
    float _fps;
    _Bool _hasRenderedOnce;
    _Bool _hasRenderedForCurrentUpdate;
    _Bool _isInTransition;
    _Bool _disableInput;
    SKScene *_scene;
    struct SKCRenderer *_renderer;
    float _prevBackingScaleFactor;
    _Bool showsFPS;
    _Bool showsNodeCount;
    double _backingScaleFactor;
    struct CGRect _bounds;
}

+ (id)rendererWithContext:(id)arg1 options:(id)arg2;
@property(nonatomic) double backingScaleFactor; // @synthesize backingScaleFactor=_backingScaleFactor;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) SKScene *scene; // @synthesize scene=_scene;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_spriteSubmitCount;
- (int)_spriteRenderCount;
- (double)_fps;
- (id)_scene;
- (void)_update:(double)arg1;
- (void)_showAllStats;
- (void)set_showsTotalAreaRendered:(_Bool)arg1;
- (_Bool)_showsTotalAreaRendered;
- (void)set_showsCulledNodesInNodeCount:(_Bool)arg1;
- (_Bool)_showsCulledNodesInNodeCount;
- (_Bool)_showsGPUStats;
- (void)set_showsGPUStats:(_Bool)arg1;
- (_Bool)_showsCPUStats;
- (void)set_showsCPUStats:(_Bool)arg1;
- (_Bool)_showsCoreAnimationFPS;
- (void)set_showsCoreAnimationFPS:(_Bool)arg1;
- (_Bool)_shouldCenterStats;
- (void)set_shouldCenterStats:(_Bool)arg1;
- (_Bool)_showsSpriteBounds;
- (void)set_showsSpriteBounds:(_Bool)arg1;
- (id)init;
@property(nonatomic) _Bool showsFields;
@property(nonatomic) _Bool showsPhysics;
@property(nonatomic) _Bool showsDrawCount;
- (_Bool)showsQuadCount;
- (void)setShowsQuadCount:(_Bool)arg1;
@property(nonatomic) _Bool showsNodeCount; // @synthesize showsNodeCount;
@property(nonatomic) _Bool showsFPS; // @synthesize showsFPS;
- (_Bool)showsSpriteBounds;
- (void)setShowsSpriteBounds:(_Bool)arg1;
- (struct CGSize)pixelSize;
- (void)render:(_Bool)arg1;
- (void)updateAtTime:(double)arg1;
- (void)setupContext;
- (void)_initialize;
- (void)dealloc;
@property(nonatomic) _Bool ignoresSiblingOrder;

@end

