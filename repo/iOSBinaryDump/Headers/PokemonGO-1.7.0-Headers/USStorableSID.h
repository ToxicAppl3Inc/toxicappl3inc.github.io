//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UpsightStorableObject.h"

@class NSString;

@interface USStorableSID : UpsightStorableObject
{
    NSString *_SID;
}

+ (id)storableSIDWithSID:(id)arg1;
@property(readonly, nonatomic) NSString *SID; // @synthesize SID=_SID;
- (void).cxx_destruct;
- (id)initWithSID:(id)arg1;
- (id)initWithType:(id)arg1 version:(id)arg2 ID:(id)arg3;

@end

