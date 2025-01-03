/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

@interface _TVRUIPersonItem : NSObject <NSCopying> {
    _TVRUIFactoidItem * _factoidItem;
    NSUUID * _identifier;
    bool  _isExpanded;
    TVRCMediaInfo * _mediaInfo;
}

@property (nonatomic, readonly) _TVRUIFactoidItem *factoidItem;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isExpandable;
@property (nonatomic) bool isExpanded;
@property (nonatomic, readonly) bool isFactoid;
@property (nonatomic, readonly) bool isMediaInfo;
@property (nonatomic, readonly) TVRCMediaInfo *mediaInfo;

+ (id)itemWithFactoidItem:(id)arg1;
+ (id)itemWithMediaInfo:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)factoidItem;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFactoidItem:(id)arg1 mediaInfo:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isFactoid;
- (bool)isMediaInfo;
- (id)mediaInfo;
- (void)setIsExpanded:(bool)arg1;

@end
