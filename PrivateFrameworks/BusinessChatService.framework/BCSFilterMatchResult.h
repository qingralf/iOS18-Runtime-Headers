/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSFilterMatchResult : NSObject <BCSFilterShardMatchResult> {
    bool  _hasMatch;
    <BCSItemIdentifying> * _itemIdentifier;
    long long  _matchingTruncatedHash;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasMatch;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BCSItemIdentifying> *itemIdentifier;
@property (nonatomic) long long matchingTruncatedHash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)hasMatch;
- (id)initWithMatch:(bool)arg1 itemIdentifier:(id)arg2 matchingTruncatedHash:(long long)arg3;
- (id)itemIdentifier;
- (long long)matchingTruncatedHash;
- (void)setHasMatch:(bool)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setMatchingTruncatedHash:(long long)arg1;

@end
