---
title: About Model Context Protocol (MCP)
allowTitleToDifferFromFilename: true
shortTitle: MCP
intro: Model Context Protocol (MCP) is a protocol that allows you to extend the capabilities of {% data variables.product.prodname_copilot %} by integrating it with other systems.
versions:
  feature: copilot
contentType: concepts
redirect_from:
  - /copilot/concepts/about-mcp
  - /copilot/concepts/extensions/agents
  - /copilot/concepts/extensions/build-extensions
  - /copilot/concepts/extensions/skillsets
  - /copilot/concepts/extensions/openid-connect
  - /copilot/how-tos/use-copilot-extensions/build-a-copilot-agent/use-copilots-llm
  - /copilot/how-tos/use-copilot-extensions/create-a-copilot-extension/create-github-app
  - /copilot/how-tos/use-copilot-extensions/build-copilot-skillsets
  - /copilot/how-tos/use-copilot-extensions/debug-copilot-extension
  - /copilot/how-tos/use-copilot-extensions/manage-extension-availability
  - /copilot/how-tos/use-copilot-extensions/set-up-oidc
  - /copilot/how-tos/provide-context/install-copilot-extensions
  - /copilot/concepts/extensions
  - /copilot/how-tos/use-copilot-extensions/create-a-copilot-extension
  - /copilot/how-tos/use-copilot-extensions
  - /copilot/concepts/context/copilot-extensions
  - /copilot/reference/extensions-glossary
  - /copilot/how-tos/use-copilot-extensions/build-a-copilot-agent
  - /copilot/building-copilot-extensions/about-building-copilot-extensions
  - /copilot/customizing-copilot/extending-the-capabilities-of-github-copilot-in-your-organization
  - /copilot/using-github-copilot/using-extensions-to-integrate-external-tools-with-copilot-chat
category:
  - Learn about Copilot
---

## Overview of Model Context Protocol (MCP)

The Model Context Protocol (MCP) is an open standard that defines how applications share context with large language models (LLMs). MCP provides a standardized way to connect AI models to different da[...] 

You can use MCP to extend the capabilities of {% data variables.product.prodname_copilot %} by integrating it with a wide range of existing tools and services. MCP works across all major {% data varia[...] 

For more information on MCP, see [the official MCP documentation](https://modelcontextprotocol.io/introduction). For a curated list of MCP servers from partners and the community, see the [{% data var...]

To learn how to configure and use MCP servers, see:

* [AUTOTITLE](/copilot/how-tos/provide-context/use-mcp/extend-copilot-chat-with-mcp) for {% data variables.copilot.copilot_chat_short %} in your IDE
* [AUTOTITLE](/copilot/how-tos/copilot-cli/customize-copilot/add-mcp-servers) for {% data variables.copilot.copilot_cli_short %}
* [AUTOTITLE](/copilot/how-tos/copilot-on-github/customize-copilot/configure-mcp-servers) for repository MCP configuration on {% data variables.product.prodname_dotcom_the_website %}
* [AUTOTITLE](/copilot/how-tos/github-copilot-app/customize-github-copilot-app) for information on MCP server support in the {% data variables.copilot.github_copilot_app %}
{% data reusables.copilot.mcp.mcp-policy %}

## Availability

MCP is supported across the following clients:

* **IDEs**: There is broad support for local MCP servers in clients such as {% data variables.product.prodname_vscode %}, JetBrains IDEs, Xcode, and others. Support for remote MCP servers is growing, [...]
* **{% data variables.copilot.copilot_cli_short %}**: {% data variables.copilot.copilot_cli %} supports both local and remote MCP servers. The {% data variables.product.github %} MCP server is built i[...]
* **{% data variables.copilot.github_copilot_app %}**: The {% data variables.copilot.github_copilot_app %} supports MCP servers configured in your repository or {% data variables.copilot.copilot_cli_s[...]
* **{% data variables.copilot.copilot_cloud_agent %} and {% data variables.copilot.copilot_code-review_short %}**: {% data variables.product.prodname_dotcom_the_website %} supports MCP servers configu[...]

## About the {% data variables.product.github %} MCP server

The {% data variables.product.github %} MCP server is a Model Context Protocol (MCP) server provided and maintained by {% data variables.product.github %}.

{% data variables.product.github %} MCP server can be used to:

* Automate and streamline code-related tasks.
* Connect third-party tools (like Cursor, Windsurf, or future integrations) to leverage {% data variables.product.github %}’s context and AI capabilities.
* Enable cloud-based workflows that work from any device, without local setup.
* Invoke {% data variables.product.github %} tools, such as {% data variables.copilot.copilot_cloud_agent %} (requires {% data variables.product.prodname_copilot %} subscription) and {% data variables[...] 

To learn how to set up and use the {% data variables.product.github %} MCP server, see [AUTOTITLE](/copilot/how-tos/context/model-context-protocol/using-the-github-mcp-server).

To find out whether your editor supports the {% data variables.product.github %} MCP server, and which connection and authentication methods are available, see [Support by host application](https://gi[...]

### Remote access

You can access the {% data variables.product.github %} MCP server remotely through {% data variables.copilot.copilot_chat_short %} in {% data variables.product.prodname_vscode %} without any local set[...]

The {% data variables.product.github %} MCP server can also run locally in any MCP-compatible editor, if necessary.

### Toolset customization

> [!IMPORTANT]
> Always review the {% data variables.product.github %} MCP server repository at [github/github-mcp-server](https://github.com/github/github-mcp-server) for the latest toolsets and authoritative confi[...]

The {% data variables.product.github %} MCP server supports enabling or disabling specific groups of functionalities via toolsets. Toolsets allow you to control which {% data variables.product.github ...]

Enabling only the toolsets you need improves your AI assistant's performance and security. Fewer tools means better tool selection accuracy and fewer errors. Disabling unused toolsets also frees up to[...]

Toolsets do not only include tools, but also relevant MCP resources and prompts where applicable.

To learn how to configure toolsets for the {% data variables.product.github %} MCP server, see [AUTOTITLE](/copilot/how-tos/context/use-mcp/configure-toolsets).

### Security

For all public repositories, and private repositories covered by {% data variables.product.prodname_GHAS %}, interactions with the {% data variables.product.github %} MCP server are secured by push pr[...]

## About the {% data variables.product.github %} MCP Registry

The {% data variables.product.github %} MCP Registry is a curated list of MCP servers from partners and the community. You can use the registry to discover new MCP servers and find ones that meet your[...]

>[!NOTE]
> The {% data variables.product.github %} MCP Registry is currently in {% data variables.release-phases.public_preview %} and subject to change.

## Next steps

* [AUTOTITLE](/copilot/how-tos/provide-context/use-mcp/extend-copilot-chat-with-mcp)—Add MCP servers to {% data variables.copilot.copilot_chat_short %} in your IDE
* [AUTOTITLE](/copilot/how-tos/copilot-on-github/customize-copilot/configure-mcp-servers)—Configure repository MCP servers for {% data variables.copilot.copilot_cloud_agent %} and {% data variables.[...]
* [AUTOTITLE](/copilot/how-tos/provide-context/use-mcp/set-up-the-github-mcp-server)—Set up the {% data variables.product.github %} MCP server
* [AUTOTITLE](/copilot/how-tos/provide-context/use-mcp/use-the-github-mcp-server)—Use the {% data variables.product.github %} MCP server
* [AUTOTITLE](/copilot/tutorials/enhancing-copilot-agent-mode-with-mcp)
* [AUTOTITLE](/copilot/reference/customization-cheat-sheet)
