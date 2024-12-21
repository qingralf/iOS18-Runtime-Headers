/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKNSBundleProxy : NSObject <PKNSBundleProxy> {
    NSBundle * __underlyingNSBundle;
}

@property (readonly) NSBundle *_underlyingNSBundle;
@property (readonly, copy) NSURL *builtInPlugInsURL;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *infoDictionary;
@property (readonly, copy) NSDictionary *localizedInfoDictionary;
@property (readonly) Class principalClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_underlyingNSBundle;
- (id)builtInPlugInsURL;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)infoDictionary;
- (id)initWithNSBundle:(id)arg1;
- (bool)loadAndReturnError:(id*)arg1;
- (id)localizedInfoDictionary;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (Class)principalClass;

@end