/* Generated by RuntimeBrowser.
 */

@protocol SRRequestFetching <SRRequestReading>

@required

- (bool)bypassHoldingPeriod;
- (SRCursor *)cursor;
- (double)from;
- (void)setBypassHoldingPeriod:(bool)arg1;
- (void)setCursor:(SRCursor *)arg1;
- (void)setFrom:(double)arg1;
- (void)setTo:(double)arg1;
- (double)to;

@end