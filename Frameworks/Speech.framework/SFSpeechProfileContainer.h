/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFSpeechProfileContainer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _loggableUserId;
    NSString * _personaId;
    NSURL * _url;
    NSString * _userId;
}

@property (nonatomic, readonly) NSString *loggableUserId;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *userId;

+ (id)defaultContainer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersona:(id)arg1;
- (id)initWithURL:(id)arg1 personaId:(id)arg2 userId:(id)arg3 loggableUserId:(id)arg4;
- (id)loggableUserId;
- (id)personaId;
- (id)url;
- (id)userId;

@end
