/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTLazuliChatBotSpamReportInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _chatbotUri;
    NSString * _freeBodyText;
    CTLazuliMessageIDList * _messageIDList;
    long long  _spamType;
}

@property (nonatomic, retain) NSString *chatbotUri;
@property (nonatomic, retain) NSString *freeBodyText;
@property (nonatomic, retain) CTLazuliMessageIDList *messageIDList;
@property (nonatomic) long long spamType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatbotUri;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)freeBodyText;
- (id)initWithCoder:(id)arg1;
- (id)initWithReflection:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTLazuliChatBotSpamReportInformation:(id)arg1;
- (id)messageIDList;
- (void)setChatbotUri:(id)arg1;
- (void)setFreeBodyText:(id)arg1;
- (void)setMessageIDList:(id)arg1;
- (void)setSpamType:(long long)arg1;
- (long long)spamType;

@end
