/* Generated by RuntimeBrowser.
 */

@protocol PKJobUpdatableState <NSCopying, NSSecureCoding, PKUserCodable>

@required

- (NSString *)PIN;
- (NSString *)jobPrinterStateMessage;
- (NSArray *)jobPrinterStateReasons;
- (NSString *)jobStateMessage;
- (NSArray *)jobStateReasons;
- (long long)localJobID;
- (long long)mediaProgress;
- (long long)mediaSheets;
- (long long)mediaSheetsCompleted;
- (NSString *)printerDisplayName;
- (NSData *)printerEndpointData;
- (long long)printerKind;
- (NSString *)printerLocation;
- (long long)remoteJobId;
- (PKPrintSettings *)settings;
- (long long)state;
- (NSData *)thumbnailImage;
- (NSDate *)timeAtCompleted;
- (NSDate *)timeAtCreation;
- (NSDate *)timeAtProcessing;

@end
