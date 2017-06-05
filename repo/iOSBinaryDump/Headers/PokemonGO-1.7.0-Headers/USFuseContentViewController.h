//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USViewController.h"

@class NSArray, NSString, UIViewController, USActionMap, USFuseContentUnit, USFusePartner;

@interface USFuseContentViewController : NSObject <USViewController>
{
    id <USViewControllerDelegate> _delegate;
    UIViewController *_presentingViewController;
    USActionMap *_actionMap;
    double _timestamp;
    NSArray *_scopes;
    double _loadingTimeout;
    NSString *_postPresentationTrigger;
    CDUnknownBlockType _completionHandler;
    USFuseContentUnit *_contentUnit;
    USFusePartner *_partner;
    UIViewController *_parentController;
}

@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController=_parentController;
@property(nonatomic) __weak USFusePartner *partner; // @synthesize partner=_partner;
@property(retain, nonatomic) USFuseContentUnit *contentUnit; // @synthesize contentUnit=_contentUnit;
@property(nonatomic) __weak CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSString *postPresentationTrigger; // @synthesize postPresentationTrigger=_postPresentationTrigger;
@property(readonly, nonatomic) double loadingTimeout; // @synthesize loadingTimeout=_loadingTimeout;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) USActionMap *actionMap; // @synthesize actionMap=_actionMap;
@property __weak id <USViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)viewDataForKey:(id)arg1;
- (void)dismissControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCloseButtonWithDelay:(double)arg1;
- (void)presentViewControllerWithRoot:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)buildContent:(id)arg1 actionMap:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithPartner:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

