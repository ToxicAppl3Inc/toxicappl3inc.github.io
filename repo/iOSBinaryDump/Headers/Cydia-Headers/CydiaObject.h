/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CC_MD5.h"

@interface CydiaObject : _CC_MD5
{
    struct MenesObjectHandle<CyteWebViewController, 0> indirect_;
    id delegate_;
}

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)fp8;
+ (id)webScriptNameForSelector:(SEL)fp8;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)fp8;
+ (id)_attributeKeys;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)localizedStringForKey:(id)fp8 value:(id)fp12 table:(id)fp16;
- (id)stringWithFormat:(id)fp8 arguments:(id)fp12;
- (void)setViewportWidth:(float)fp8;
- (void)scrollToBottom:(id)fp8;
- (void)setToken:(id)fp8;
- (void)setPasteboardURL:(id)fp8;
- (void)setPasteboardString:(id)fp8;
- (void)setNavigationBarTintRed:(id)fp8 green:(id)fp12 blue:(id)fp16 alpha:(id)fp20;
- (void)setNavigationBarStyle:(id)fp8;
- (void)setHidesNavigationBar:(id)fp8;
- (void)setHidesBackButton:(id)fp8;
- (void)setAllowsNavigationAction:(id)fp8;
- (void)setBadgeValue:(id)fp8;
- (void)setButtonTitle:(id)fp8 withStyle:(id)fp12 toFunction:(id)fp16;
- (void)setButtonImage:(id)fp8 withStyle:(id)fp12 toFunction:(id)fp16;
- (void)removeButton;
- (id)substitutePackageNames:(id)fp8;
- (void)installPackages:(id)fp8;
- (id)isReachable:(id)fp8;
- (void)close;
- (id)du:(id)fp8;
- (id)statfs:(id)fp8;
- (id)getPreferredLanguages;
- (id)getLocaleIdentifier;
- (id)getPackageById:(id)fp8;
- (id)getInstalledPackages;
- (id)getAllSources;
- (void)saveConfig;
- (void)refreshSources;
- (void)addTrivialSource:(id)fp8;
- (void)addSource:(id)fp8:(id)fp12:(id)fp16;
- (void)popViewController:(id)fp8;
- (void)addPipelinedHost:(id)fp8 scheme:(id)fp12;
- (void)addInsecureHost:(id)fp8;
- (void)addBridgedHost:(id)fp8;
- (void)setSessionValue:(id)fp8:(id)fp12;
- (id)getSessionValue:(id)fp8;
- (void)setMetadataValue:(id)fp8:(id)fp12;
- (id)getMetadataValue:(id)fp8;
- (void)registerFrame:(id)fp8;
- (id)getMetadataKeys;
- (id)getIORegistryEntry:(id)fp8:(id)fp12;
- (id)getKernelString:(id)fp8;
- (id)getKernelNumber:(id)fp8;
- (id)getApplicationInfo:(id)fp8 value:(id)fp12;
- (void)addInternalRedirect:(id)fp8:(id)fp12;
- (void)setScrollIndicatorStyle:(id)fp8;
- (void)setScrollAlwaysBounceVertical:(id)fp8;
- (void)unload;
- (BOOL)supports:(id)fp8;
- (id)model;
- (id)role;
- (id)serial;
- (id)ecid;
- (id)bbsnum;
- (id)operator;
- (id)mnc;
- (id)mcc;
- (id)idiom;
- (id)hostname;
- (id)firmware;
- (id)device;
- (id)coreFoundationVersionNumber;
- (id)build;
- (id)version;
- (id)attributeKeys;
- (void)setDelegate:(id)fp8;
- (id)initWithDelegate:(id)fp8;

@end

