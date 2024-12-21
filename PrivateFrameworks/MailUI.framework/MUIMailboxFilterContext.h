/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUIMailboxFilterContext : NSObject {
    EMFocus * _focus;
    bool  _isFilteringAvailable;
    NSArray * _mailboxes;
}

@property (nonatomic, readonly) EMFocus *focus;
@property (nonatomic, readonly) bool isFilteringAvailable;
@property (nonatomic, readonly, copy) NSArray *mailboxes;

+ (id)contextWithMailboxes:(id)arg1 focus:(id)arg2 isFilteringAvailable:(bool)arg3;

- (void).cxx_destruct;
- (id)focus;
- (unsigned long long)hash;
- (id)initWithMailboxes:(id)arg1 focus:(id)arg2 isFilteringAvailable:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isFilteringAvailable;
- (id)mailboxes;

@end