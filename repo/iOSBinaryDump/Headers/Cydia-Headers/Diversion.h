/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@interface Diversion : _CC_MD5
{
    struct RegEx pattern_;
    struct MenesObjectHandle<NSString, 0> key_;
    struct MenesObjectHandle<NSString, 0> format_;
}

+ (id)divertURL:(id)fp8;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)fp8;
- (unsigned int)hash;
- (id)key;
- (id)divert:(id)fp8;
- (id)initWithFrom:(id)fp8 to:(id)fp12;

@end

