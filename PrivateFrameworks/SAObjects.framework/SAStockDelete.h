/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockDelete : SADomainCommand

@property (nonatomic, copy) NSArray *stocks;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setStocks:(id)arg1;
- (id)stocks;

@end