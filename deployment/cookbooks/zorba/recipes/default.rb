execute "apt-get-update" do
  command "apt-get update"
  ignore_failure true
  action :run
end

package "python-software-properties" do
  action :install
end

ppa "juan457/zorba"

package "zorba" do
  action :install
end
