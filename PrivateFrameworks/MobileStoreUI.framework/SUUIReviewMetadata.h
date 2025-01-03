/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIReviewMetadata : NSObject <NSCopying> {
    NSString * _body;
    unsigned long long  _bodyMaxLength;
    NSString * _nickname;
    unsigned long long  _nicknameMaxLength;
    float  _rating;
    NSURL * _submitURL;
    NSString * _title;
    unsigned long long  _titleMaxLength;
}

@property (nonatomic, copy) NSString *body;
@property (nonatomic, readonly) unsigned long long bodyMaxLength;
@property (nonatomic, copy) NSString *nickname;
@property (nonatomic, readonly) unsigned long long nicknameMaxLength;
@property (nonatomic) float rating;
@property (nonatomic, readonly) NSURL *submitURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long titleMaxLength;

- (void).cxx_destruct;
- (id)body;
- (unsigned long long)bodyMaxLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReviewDictionary:(id)arg1;
- (id)nickname;
- (unsigned long long)nicknameMaxLength;
- (float)rating;
- (void)setBody:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setTitle:(id)arg1;
- (id)submitURL;
- (id)title;
- (unsigned long long)titleMaxLength;

@end
