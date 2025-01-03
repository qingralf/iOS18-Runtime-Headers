/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneClientIdentity : NSObject <FBSSceneClientIdentifying, NSCopying, NSSecureCoding> {
    NSString * _description;
    bool  _direct;
    bool  _local;
    RBSProcessIdentity * _processIdentity;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly, copy) RBSProcessIdentity *processIdentity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool targetsClientEndpoint;

+ (id)defaultIdentityForProcessIdentity:(id)arg1;
+ (id)identityForBundleID:(id)arg1;
+ (id)identityForInjectedEndpointToProcessIdentity:(id)arg1;
+ (id)identityForManagedEndpointOfProcessIdentity:(id)arg1;
+ (id)identityForProcessIdentity:(id)arg1;
+ (id)localIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLocal:(bool)arg1 direct:(bool)arg2 identity:(id)arg3 description:(id)arg4;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fbs_sceneClientIdentity;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isValid;
- (id)processIdentity;
- (bool)targetsClientEndpoint;

@end
