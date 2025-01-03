/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSInternalFeedbackRadarComponent : NSObject <NSCopying> {
    NSString * _identifier;
    NSString * _name;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)safariAutoFill;
+ (id)safariIOS;
+ (id)safariNewBugs;
+ (id)safariStartPageIOS;
+ (id)safariStartPageMacOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 version:(id)arg3;
- (id)name;
- (id)version;

@end
