/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNCAPackageProvider : NSObject <BNCAPackageProviding> {
    NSBundle * _bundle;
    NSString * _name;
    NSString * _state;
}

@property (nonatomic, readonly, copy) NSBundle *bundle;
@property (getter=isCAPackageProvider, nonatomic, readonly) bool caPackageProvider;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *state;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPackageName:(id)arg1 inBundle:(id)arg2 state:(id)arg3;
- (bool)isCAPackageProvider;
- (id)name;
- (id)state;

@end