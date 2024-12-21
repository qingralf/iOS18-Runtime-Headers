/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDAlertPresentationRequest : NSObject <NSSecureCoding> {
    NSMutableArray * _actions;
    long long  _icon;
    NSString * _iconBundlePath;
    NSString * _logKey;
    NSString * _message;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) long long icon;
@property (nonatomic, retain) NSString *iconBundlePath;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;

+ (id)requestWithTitle:(id)arg1 message:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)addActionWithTitle:(id)arg1;
- (id)addActionWithTitle:(id)arg1 style:(long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)icon;
- (id)iconBundlePath;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)logKey;
- (id)message;
- (void)setActions:(id)arg1;
- (void)setIcon:(long long)arg1;
- (void)setIconBundlePath:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end