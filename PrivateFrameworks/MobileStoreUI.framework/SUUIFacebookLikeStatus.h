/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileStoreUI.framework/MobileStoreUI
 */

@interface SUUIFacebookLikeStatus : NSObject <NSCopying> {
    NSArray * _friends;
    NSURL * _url;
    bool  _userLiked;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSArray *friendNames;
@property (getter=isUserLiked, nonatomic) bool userLiked;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)friendNames;
- (id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2;
- (bool)isUserLiked;
- (void)setFriendNames:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUserLiked:(bool)arg1;

@end
