/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsXPCLargeMessageEnvelope : NSObject <NSCopying, NSSecureCoding> {
    NSString * _largeMessagePath;
    NSUUID * _requestIdentifier;
    NSData * _serializedDataUploadMessage;
}

@property (nonatomic, readonly, copy) NSString *largeMessagePath;
@property (nonatomic, readonly, copy) NSUUID *requestIdentifier;
@property (nonatomic, readonly, copy) NSData *serializedDataUploadMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLargeMessagePath:(id)arg1 requestIdentifier:(id)arg2 serializedDataUploadMessage:(id)arg3;
- (id)largeMessagePath;
- (id)requestIdentifier;
- (id)serializedDataUploadMessage;

@end