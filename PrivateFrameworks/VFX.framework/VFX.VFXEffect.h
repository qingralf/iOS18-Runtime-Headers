/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VFX.framework/VFX
 */

@interface VFX.VFXEffect : NSObject {
    void _enabled;
    void _tombstoned;
    void cancellables;
    void delegate;
    void effectID;
    void entityObject;
    void name;
    void onEffectRestartSubject;
    void rootEntity;
    void scene;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  url;
    void version;
}

@property (nonatomic) bool allowRemoteEdition;
@property (nonatomic, readonly) NSArray *bindings;
@property (nonatomic, readonly) NSArray *cameras;
@property (nonatomic, retain) <_TtP3VFX17VFXEffectDelegate_> *delegate;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isTombstoned;
@property (nonatomic, readonly) long long rootObjectID;
@property (nonatomic) _TtC3VFX8VFXScene *scene;
@property (nonatomic) long long version;

- (void).cxx_destruct;
- (id)allCameraNamed:(id)arg1;
- (bool)allowRemoteEdition;
- (id)bindingOf:(id)arg1 named:(id)arg2;
- (id)bindingWith:(long long)arg1 named:(id)arg2;
- (id)bindings;
- (id)cameras;
- (id)delegate;
- (void)dump;
- (long long)fetchClientTextureIDWithNamed:(id)arg1;
- (id)firstBindingWithName:(id)arg1;
- (long long)identifier;
- (id)init;
- (bool)isEnabled;
- (bool)isEnabled:(id)arg1;
- (bool)isTombstoned;
- (long long)lookupObjectIDByName:(id)arg1;
- (id)parameterOf:(id)arg1 named:(id)arg2;
- (void)parameterOf:(long long)arg1 named:(id)arg2 type:(long long)arg3 with:(id /* block */)arg4;
- (void)parameterOf:(long long)arg1 named:(id)arg2 with:(id /* block */)arg3;
- (long long)rootObjectID;
- (id)scene;
- (void)setAllowRemoteEdition:(bool)arg1;
- (void)setClientTextureWithId:(long long)arg1 texture:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(id)arg1 enabled:(bool)arg2;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsTombstoned:(bool)arg1;
- (void)setParameterOf:(id)arg1 named:(id)arg2 :(id)arg3;
- (void)setParameterOf:(long long)arg1 named:(id)arg2 type:(long long)arg3 size:(long long)arg4 with:(id /* block */)arg5;
- (void)setParameterOf:(long long)arg1 named:(id)arg2 with:(id /* block */)arg3;
- (void)setScene:(id)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;
- (void)withPointerToParameterOf:(id)arg1 named:(id)arg2 block:(id /* block */)arg3;

@end
