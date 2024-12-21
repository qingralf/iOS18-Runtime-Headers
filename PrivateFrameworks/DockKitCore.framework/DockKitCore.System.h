/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DockKitCore.framework/DockKitCore
 */

@interface DockKitCore.System : NSObject <NSSecureCoding> {
    void components;
    void id;
    void name;
    void type;
}

@property (nonatomic, copy) NSDictionary *components;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)components;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 type:(long long)arg2 name:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setComponents:(id)arg1;

@end