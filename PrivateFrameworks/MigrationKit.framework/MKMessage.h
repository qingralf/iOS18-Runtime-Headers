/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MigrationKit.framework/MigrationKit
 */

@interface MKMessage : NSObject {
    NSString * _ID;
    NSString * _UUID;
    NSString * _account;
    NSArray * _attachments;
    NSData * _attributedBody;
    NSString * _body;
    long long  _chatStyle;
    NSDate * _date;
    NSArray * _handles;
    bool  _isNormalized;
    bool  _isRead;
    bool  _isSent;
    NSArray * _recipients;
    NSString * _sender;
    NSString * _subject;
    NSString * _threadID;
    long long  _timestampInNanoseconds;
    long long  _timestampInSeconds;
}

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSString *account;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSData *attributedBody;
@property (nonatomic, copy) NSString *body;
@property (nonatomic) long long chatStyle;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSArray *handles;
@property (nonatomic) bool isNormalized;
@property (nonatomic) bool isRead;
@property (nonatomic) bool isSent;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *threadID;
@property (nonatomic) long long timestampInNanoseconds;
@property (nonatomic) long long timestampInSeconds;

- (void).cxx_destruct;
- (id)ID;
- (id)UUID;
- (id)account;
- (id)attachments;
- (id)attributedBody;
- (id)body;
- (long long)chatStyle;
- (id)date;
- (id)handles;
- (id)initWithData:(id)arg1;
- (bool)isNormalized;
- (bool)isRead;
- (bool)isSent;
- (id)recipients;
- (id)sender;
- (void)setAccount:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttributedBody:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setChatStyle:(long long)arg1;
- (void)setDate:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setID:(id)arg1;
- (void)setIsNormalized:(bool)arg1;
- (void)setIsRead:(bool)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setThreadID:(id)arg1;
- (void)setTimestampInNanoseconds:(long long)arg1;
- (void)setTimestampInSeconds:(long long)arg1;
- (void)setUUID:(id)arg1;
- (id)subject;
- (id)threadID;
- (long long)timestampInNanoseconds;
- (long long)timestampInSeconds;

@end
