/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMMessageHistoryMessage : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSString * _guid;
    long long  _messagePartCount;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, copy) NSString *guid;
@property (nonatomic, readonly) long long messagePartCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1 date:(id)arg2 messagePartCount:(long long)arg3;
- (long long)messagePartCount;

@end
