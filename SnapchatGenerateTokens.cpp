//
// SnapchatGenerateTokens.cpp
//
// $Id: ... $
//
// This class generates the Snapchat signature variables x-snap-access-token and x-snapchat-att-token
//
// Requirements: no external API, no external service
//
// Copyright (C) 2023 - 2025 by BestBotsInTown, West Europe
// Telegram: BestBotsInTown - https://telegram.me/BestBotsInTown - E-Mail: info@bestbotsintown.com
// Other contact options: https://linktree.com/BestBotsInTown



#include "SnapchatGenerateTokens.h"



std::string SnapchatGenerateTokens::generateHTTPHeaderSignature (std::string strJob) {

   std::string strHTTPHeaderSignature = "";


   if (strJob == "accept-friend-request") {

      // Code removed due to privacy/security reasons
      // Telegram: BestBotsInTown - https://telegram.me/BestBotsInTown - E-Mail: info@bestbotsintown.com
      // Other contact options: https://linktree.com/BestBotsInTown
      
   } else if (strJob == "add-friend") {

      // retrieve x-snap-access-token ("hCgw...") from global variable
      strHTTPHeaderSignature += "x-snap-access-token:" + m_strSnapAccessToken + "\n";

      // generate x-snapchat-att-token ("Ci...") with reverse engineered native library code
      if (generateXSnapchatAttToken()) {
         strHTTPHeaderSignature += "x-snapchat-att-token: " + retrieveXSnapchatAttToken() + "\n";
      }

      // "BgAAAA..." HTTP body (cGRPC Protobuf variable) follows at ::generateHTTPBody()

   }


   return strHTTPHeaderSignature;

}
