/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXNamedHandle : NSObject <NSSecureCoding> {
    NSString * _contactIdentifier;
    NSString * _handle;
    NSString * _handleType;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *handleType;
@property (nonatomic, readonly) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)handleType;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 handle:(id)arg2 contactIdentifier:(id)arg3 handleType:(id)arg4;
- (id)name;

@end