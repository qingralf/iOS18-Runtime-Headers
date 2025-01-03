/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShellSceneKit.framework/ShellSceneKit
 */

@interface SSKDisplayProfileConfiguration : NSObject <SSKDisplayControllerTransforming> {
    void configuration;
}

@property (nonatomic, readonly) NSString *derivedIdentifier;
@property (nonatomic, readonly) bool derivesDisplays;
@property (nonatomic, readonly) bool isMainLike;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, readonly) bool shouldTransformConnectingDisplays;
@property (nonatomic, readonly) bool supportsCloning;

- (void).cxx_destruct;
- (id)derivedIdentifier;
- (bool)derivesDisplays;
- (id)init;
- (bool)isMainLike;
- (unsigned long long)priority;
- (bool)shouldTransformConnectingDisplays;
- (bool)supportsCloning;
- (void)transformPhysicalDisplayWith:(id)arg1;

@end
