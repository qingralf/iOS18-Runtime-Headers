/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISceneHostingControllerAdvancedConfiguration : NSObject {
    NSOrderedSet * _additionalExtensions;
    id /* block */  _initialClientSettingsUpdater;
    id /* block */  _initialSettingsUpdater;
    RBSProcessIdentity * _processIdentity;
    NSString * _sceneIdentifier;
    UIApplicationSceneSpecification * _sceneSpecification;
    FBSceneWorkspace * _sceneWorkspace;
}

@property (nonatomic, retain) NSOrderedSet *additionalExtensions;
@property (nonatomic, copy) id /* block */ initialClientSettingsUpdater;
@property (nonatomic, copy) id /* block */ initialSettingsUpdater;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, retain) NSString *sceneIdentifier;
@property (nonatomic, retain) UIApplicationSceneSpecification *sceneSpecification;
@property (nonatomic, retain) FBSceneWorkspace *sceneWorkspace;

- (void).cxx_destruct;
- (id)additionalExtensions;
- (id)initWithProcessIdentity:(id)arg1;
- (id /* block */)initialClientSettingsUpdater;
- (id /* block */)initialSettingsUpdater;
- (id)processIdentity;
- (id)sceneHostingSpecification;
- (id)sceneIdentifier;
- (id)sceneSpecification;
- (id)sceneWorkspace;
- (void)setAdditionalExtensions:(id)arg1;
- (void)setInitialClientSettingsUpdater:(id /* block */)arg1;
- (void)setInitialSettingsUpdater:(id /* block */)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSceneSpecification:(id)arg1;
- (void)setSceneWorkspace:(id)arg1;

@end