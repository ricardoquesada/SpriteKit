//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface SKTextureCache : NSObject
{
    long long filteringMode;
    unsigned int texId;
    int texInternalFormat;
    unsigned int texFormat;
    unsigned int texType;
    struct CGSize size;
    struct CGSize pixelSize;
    _Bool isLoaded;
    _Bool hasAlpha;
    _Bool isPOT;
    char *pixelData;
    unsigned int *alphaMap;
    struct CGSize alphaMapSize;
    int state;
    int lock;
    struct CGImage *collisionMask;
    int wrapMode;
}

@property(nonatomic) int wrapMode; // @synthesize wrapMode;
@property(nonatomic) long long filteringMode; // @synthesize filteringMode;
@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) unsigned int texType; // @synthesize texType;
@property(nonatomic) unsigned int texFormat; // @synthesize texFormat;
@property(nonatomic) int texInternalFormat; // @synthesize texInternalFormat;
@property(nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize;
@property(nonatomic) unsigned int *alphaMap; // @synthesize alphaMap;
@property(nonatomic) struct CGSize pixelSize; // @synthesize pixelSize;
@property(nonatomic) char *pixelData; // @synthesize pixelData;
@property(nonatomic) _Bool hasAlpha; // @synthesize hasAlpha;
@property(nonatomic) _Bool isPOT; // @synthesize isPOT;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded;
@property(nonatomic) struct CGSize size; // @synthesize size;
@property(nonatomic) unsigned int texId; // @synthesize texId;
- (id).cxx_construct;
@property(readonly, nonatomic, getter=getLock) int *lock;
- (void)dealloc;
- (id)init;

@end

