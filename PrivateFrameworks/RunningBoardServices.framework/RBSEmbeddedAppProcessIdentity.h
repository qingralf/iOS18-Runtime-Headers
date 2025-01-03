/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSEmbeddedAppProcessIdentity : RBSProcessIdentity {
    NSString * _embeddedApplicationIdentifier;
    NSString * _personaString;
}

- (void).cxx_destruct;
- (id)_initEmbeddedApp:(id)arg1 personaString:(id)arg2;
- (id)_initEmbeddedAppWithAppInfo:(id)arg1;
- (id)_initEmbeddedAppWithBundleID:(id)arg1;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)debugDescription;
- (unsigned char)defaultManageFlags;
- (id)embeddedApplicationIdentifier;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)initWithDecodeFromJob:(id)arg1 uuid:(id)arg2;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isAnonymous;
- (bool)isApplication;
- (bool)isEmbeddedApplication;
- (bool)isEqual:(id)arg1;
- (id)personaString;
- (bool)supportsLaunchingDirectly;
- (bool)treatedAsAnAppByFrontBoard:(id*)arg1;

@end
