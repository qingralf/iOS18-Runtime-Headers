/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShellSceneKit.framework/ShellSceneKit
 */

@interface SSKDisplayProfile : NSObject <BSDescriptionStreamable, SSKDisplayControllerProviding, SSKSceneHostingDisplayControllerProviderDelegate> {
    <SSKDisplayProfileDelegate> * _delegate;
    <SSKDisplayControllerTransforming> * _displayTransformer;
    unsigned long long  _priorityLevel;
    <SSKDisplayControllerProviding> * _provider;
}

@property (nonatomic, readonly) unsigned long long deactivationReasonsWhenActive;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic) <SSKDisplayProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long priorityLevel;
@property (readonly) Class superclass;

+ (id)mirroringMainDisplayProfileWithDelegate:(id)arg1;
+ (id)sceneHostingProfileWithDelegate:(id)arg1 builder:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)deactivationReasonsWhenActive;
- (id)delegate;
- (id)description;
- (id)displayControllerForDisplay:(id)arg1 configuration:(id)arg2;
- (bool)evaluatePhysicalDisplay:(id)arg1;
- (id)initWithPriority:(unsigned long long)arg1 displayTransformer:(id)arg2 provider:(id)arg3 delegate:(id)arg4;
- (id)initWithSwiftConfiguration:(id)arg1 delegate:(id)arg2;
- (unsigned long long)priorityLevel;
- (void)provider:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (id)provider:(id)arg1 rootSceneWindowForDisplayConfiguration:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldTransformConnectingDisplays;
- (void)transformPhysicalDisplayWithBuilder:(id)arg1;
- (bool)usesRootDisplay;

@end
