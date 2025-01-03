/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor> {
    unsigned int  __pad_bits;
    char * application_service_name;
    char * bundle_id;
    int  descriptor_type;
    char * domain;
    int  invitation_route;
    int  invitation_scope;
    char * name;
    unsigned int  no_auto_rename;
    NSObject<OS_nw_txt_record> * txt_record;
    char * type;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
