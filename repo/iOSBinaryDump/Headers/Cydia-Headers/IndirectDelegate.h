/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@interface IndirectDelegate : _CC_MD5
{
    id delegate_;
}

- (void)forwardInvocation:(id)fp8;
- (id)methodSignatureForSelector:(SEL)fp8;
- (BOOL)respondsToSelector:(SEL)fp8;
- (void *)methodForSelector:(SEL)fp8;
- (id)initWithDelegate:(id)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end

