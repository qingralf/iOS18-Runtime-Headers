/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI
 */

@interface TabDocumentCollectionItem : NSObject <NSCopying, TabCollectionItem> {
    NSUUID * _UUID;
    long long  _dragState;
    UIImage * _icon;
    bool  _isPlaceholder;
    unsigned long long  _mediaStateIcon;
    NSHashTable * _observers;
    bool  _pinned;
    NSString * _title;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic) bool pinned;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)placeholderItem;

- (void).cxx_destruct;
- (id)UUID;
- (void)addTabCollectionItemObserver:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)dragState;
- (unsigned long long)hash;
- (id)icon;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (bool)isPlaceholder;
- (unsigned long long)mediaStateIcon;
- (void)removeTabCollectionItemObserver:(id)arg1;
- (void)setDragState:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)title;

@end