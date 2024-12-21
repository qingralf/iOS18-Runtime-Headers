/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
 */

@interface _UIKeyboardArbiterSceneFocusChange : NSObject <BSDescriptionStreaming> {
    bool  _isFocusNothing;
    int  _pid;
    FBSSceneIdentityToken * _sceneIdentity;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) FBSSceneIdentityToken *sceneIdentity;
@property (readonly) Class superclass;

+ (id)focusNothingChange;
+ (id)new;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isFocusNothing;
- (void)appendDescriptionToStream:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSceneIdentity:(id)arg1 pid:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)sceneIdentity;

@end