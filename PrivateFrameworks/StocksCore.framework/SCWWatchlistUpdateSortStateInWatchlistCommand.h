/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore
 */

@interface SCWWatchlistUpdateSortStateInWatchlistCommand : NSObject <SCWZoneCommand> {
    NSNumber * _displayState;
    NSNumber * _sortOrderState;
    NSNumber * _sortState;
    NSString * _watchlistIdentifier;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *sortOrderState;
@property (nonatomic, readonly, copy) NSNumber *sortState;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *watchlistIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayState;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWatchlistIdentifier:(id)arg1 sortState:(id)arg2 sortOrderState:(id)arg3 displayState:(id)arg4;
- (id)sortOrderState;
- (id)sortState;
- (id)watchlistIdentifier;

@end