/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>
{
    int _storageLock;
    NSMutableArray *_storage;
}

- (void).cxx_destruct;
@property(readonly) NSArray *arrayRepresentation;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithNSMutableArray:(id)arg1;

@end

