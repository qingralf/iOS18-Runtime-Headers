/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationFilterItemCache : NSObject {
    CommunicationFilterItem * _filterItem;
    long long  _isInList;
}

@property (nonatomic) long long isInList;

- (void).cxx_destruct;
- (id)initWithFilterItem:(id)arg1 isInList:(long long)arg2;
- (long long)isInList;
- (bool)matchesItem:(id)arg1;
- (void)setIsInList:(long long)arg1;

@end