/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StocksCore.framework/StocksCore
 */

@interface SCWatchlistAddSymbolsCommand : NSObject <SCWZoneCommand> {
    NSArray * _symbols;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *symbols;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbols:(id)arg1;
- (id)symbols;

@end
