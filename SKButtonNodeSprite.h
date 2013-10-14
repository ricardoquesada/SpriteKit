/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SpriteKit/SKSpriteNode.h>

@class NSObject<SKButtonNodeSpriteDelegate>, SKAction;

@interface SKButtonNodeSprite : SKSpriteNode
{
    NSObject<SKButtonNodeSpriteDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;
    id _downBlock;
    id _upBlock;
    id _upInsideBlock;
    int _touches;
}

+ (id)buttonWithFontNamed:(id)arg1;
@property(retain, nonatomic) SKAction *upAction; // @synthesize upAction=_upAction;
@property(retain, nonatomic) SKAction *downAction; // @synthesize downAction=_downAction;
@property(nonatomic) __weak NSObject<SKButtonNodeSpriteDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)onTouchDownInside:(id)arg1;
- (void)onTouchUp:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

