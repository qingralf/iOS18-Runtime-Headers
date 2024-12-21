/* Generated by RuntimeBrowser
   Image: /usr/lib/libacmobileshim.dylib
 */

@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property bool generatedWithTouchID; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *rawResponseData;
@property (readonly) Class superclass;
@property (retain) NSString *token;
@property (retain) NSString *userName;

+ (id)authenticationResponse;

@end