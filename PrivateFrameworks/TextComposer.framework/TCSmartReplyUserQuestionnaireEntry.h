/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCSmartReplyUserQuestionnaireEntry : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _answerOptionsArray;
    NSString * _defaultOption;
    NSString * _question;
    NSString * _selectedOption;
}

@property (nonatomic, readonly, copy) NSOrderedSet *answerOptions;
@property (nonatomic, readonly, copy) NSString *defaultOption;
@property (nonatomic, readonly, copy) NSString *question;
@property (nonatomic, readonly, copy) NSString *selectedOption;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)answerOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultOption;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnswerOptions:(id)arg1 question:(id)arg2 selectedOption:(id)arg3 defaultOption:(id)arg4;
- (id)initWithAnswerOptionsArray:(id)arg1 question:(id)arg2 selectedOption:(id)arg3 defaultOption:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)question;
- (id)selectedOption;

@end