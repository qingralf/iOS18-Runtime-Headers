/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKRemoteViewServiceConfiguration : NSObject <NSSecureCoding> {
    NSString * _hostBundleID;
    NSString * _hostSceneID;
}

@property (nonatomic, copy) NSString *hostBundleID;
@property (nonatomic, copy) NSString *hostSceneID;

+ (id)configurationForHostWithBundleID:(id)arg1 sceneID:(id)arg2;
+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hostBundleID;
- (id)hostSceneID;
- (id)initWithCoder:(id)arg1;
- (void)setHostBundleID:(id)arg1;
- (void)setHostSceneID:(id)arg1;

@end